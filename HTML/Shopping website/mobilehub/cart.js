// Global Cart Storage (uses localStorage for persistence)
let cart = JSON.parse(localStorage.getItem('audiohub_cart')) || {};

// Initialize cart on page load
document.addEventListener('DOMContentLoaded', function() {
    initializeCart();
    updateCartDisplay();
});

// Initialize cart HTML structure if not already present
function initializeCart() {
    if (!document.getElementById('cartDrawer')) {
        const cartHTML = `
        <!-- Shopping Cart Overlay -->
        <div id="cartOverlay" class="cart-overlay" onclick="closeCart()"></div>

        <!-- Shopping Cart Drawer -->
        <div id="cartDrawer" class="cart-drawer">
            <!-- Cart Header -->
            <div class="cart-header">
                <h2 class="cart-title">Shopping Cart</h2>
                <button onclick="closeCart()" class="cart-close">×</button>
            </div>

            <!-- Cart Items Container -->
            <div class="cart-items" id="cartItemsContainer">
                <!-- Dynamic cart items will be inserted here -->
            </div>

            <!-- Empty Cart Message -->
            <div id="emptyCart" class="empty-cart">
                <div class="empty-cart-icon">🛒</div>
                <h3 class="empty-cart-title">Your cart is empty</h3>
                <p>Add some amazing audio products to get started!</p>
            </div>

            <!-- Cart Footer -->
            <div class="cart-footer">
                <div class="cart-subtotal">
                    <span>Subtotal:</span>
                    <span id="cartTotal">₹0</span>
                </div>
                <p class="cart-shipping">Shipping and taxes calculated at checkout.</p>
                <button id="checkoutBtn" class="cart-checkout-btn" onclick="goToCheckout()" style="display: none;">
                    💳 Checkout (<span id="itemCount">0</span> items)
                </button>
                <div class="cart-continue">
                    <button class="cart-continue-btn" onclick="closeCart()">
                        Continue Shopping →
                    </button>
                </div>
            </div>
        </div>
        `;
        document.body.insertAdjacentHTML('beforeend', cartHTML);
    }
}

// Open Cart Drawer
function openCart() {
    document.getElementById('cartDrawer').classList.add('open');
    document.getElementById('cartOverlay').classList.add('open');
    updateCartDisplay();
}

// Close Cart Drawer
function closeCart() {
    document.getElementById('cartDrawer').classList.remove('open');
    document.getElementById('cartOverlay').classList.remove('open');
}

// Add product to cart (UNIVERSAL FUNCTION)
function addToCart(productId, productData) {
    if (!cart[productId]) {
        cart[productId] = { ...productData, qty: 0 };
    }
    cart[productId].qty += 1;
    saveCart();
    openCart();
    updateCartDisplay();
}

// Change quantity
function changeQty(productId, change) {
    if (cart[productId]) {
        cart[productId].qty = Math.max(0, cart[productId].qty + change);
        if (cart[productId].qty === 0) {
            delete cart[productId];
        }
        saveCart();
        updateCartDisplay();
    }
}

// Remove item
function removeItem(productId) {
    delete cart[productId];
    saveCart();
    updateCartDisplay();
}

// Save cart to localStorage
function saveCart() {
    localStorage.setItem('audiohub_cart', JSON.stringify(cart));
}

// Update cart display
function updateCartDisplay() {
    const container = document.getElementById('cartItemsContainer');
    const emptyCart = document.getElementById('emptyCart');
    const checkoutBtn = document.getElementById('checkoutBtn');
    const cartTotal = document.getElementById('cartTotal');
    const itemCount = document.getElementById('itemCount');

    // Clear existing items
    container.innerHTML = '';

    let total = 0;
    let itemCountNum = 0;

    // Render cart items
    for (let productId in cart) {
        if (cart[productId].qty > 0) {
            const item = cart[productId];
            const itemTotal = item.qty * item.price;
            total += itemTotal;
            itemCountNum += item.qty;

            const cartItemHtml = `
                <div class="cart-item" data-product-id="${productId}">
                    <div class="cart-item-image">
                        <img src="${item.image}" alt="${item.name}">
                    </div>
                    <div class="cart-item-details">
                        <div class="cart-item-title">${item.name}</div>
                        <div class="cart-item-price">₹${new Intl.NumberFormat('en-IN').format(item.price)}</div>
                        <div class="cart-item-variant">${item.variant || 'Default'}</div>
                        <div class="cart-item-qty">
                            <button class="qty-btn" onclick="changeQty('${productId}', -1)">−</button>
                            <span style="color: #000000 !important; font-weight: 700 !important;">${item.qty}</span>
                            <button class="qty-btn" onclick="changeQty('${productId}', 1)">+</button>
                        </div>
                        <button class="cart-remove" onclick="removeItem('${productId}')">Remove</button>
                    </div>
                </div>
            `;
            container.innerHTML += cartItemHtml;
        }
    }

    // Update UI
    if (Object.keys(cart).length === 0 || itemCountNum === 0) {
        container.style.display = 'none';
        emptyCart.style.display = 'block';
        checkoutBtn.style.display = 'none';
        cartTotal.textContent = '₹0';
        itemCount.textContent = '0';
    } else {
        container.style.display = 'block';
        emptyCart.style.display = 'none';
        checkoutBtn.style.display = 'block';
        cartTotal.textContent = '₹' + new Intl.NumberFormat('en-IN').format(total);
        itemCount.textContent = itemCountNum;
    }
}

// Go to checkout
function goToCheckout() {
    window.location.href = 'checkout.html';
}

// Close cart when clicking overlay
window.onclick = function(event) {
    const cartDrawer = document.getElementById('cartDrawer');
    const overlay = document.getElementById('cartOverlay');
    if (cartDrawer && overlay && event.target === overlay) {
        closeCart();
    }
}
