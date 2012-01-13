#define IS_IPAD() \
    ([[UIDevice currentDevice] respondsToSelector:@selector(userInterfaceIdiom)] ? \
    (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad) : \
    false)