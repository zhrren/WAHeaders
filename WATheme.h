/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSMutableDictionary, UIColor, UIFont, UIImage;

@interface WATheme : _ABAddressBookCopyArrayOfAllGroups
{
    UIImage *_wallpaperImage;
    UIImage *_blurredWallpaperImage;
    NSMutableDictionary *_contactNameColors;
    int _groupedTableViewCellSeparatorStyle;
    float _genericTableRowHeight;
    UIFont *_genericTableCellFont;
    float _chatsTableRowHeight;
    UIColor *_tableViewTextFieldTextColor;
    int _tableViewCellDefaultTextAlignment;
    int _tableViewCellActionTextAlignment;
    UIColor *_tableViewCellTextColor;
    UIColor *_tableViewCellTextColorSelected;
    UIColor *_tableViewCellDestructiveTextColor;
    UIColor *_tableViewCellHighlightedBackgroundColor;
    UIColor *_tableViewCellSeparatorColor;
    UIFont *_tableViewFooterFont;
    UIColor *_tableViewFooterTextColor;
    UIColor *_tableViewFooterTextShadowColor;
    int _tableViewFooterTextAlignment;
    UIColor *_tintColor;
    UIColor *_accentColor;
    UIColor *_disabledTintColor;
    UIColor *_helperTextColor;
    UIColor *_helperTextBackgroundColor;
    float _contactsTableRowHeight;
    float _waContactTableRowHeight;
    float _favoritesTableRowHeight;
    float _forwardPickerTableRowHeight;
    UIFont *_contactNameFont;
    UIFont *_waContactNameFont;
    UIColor *_contactNameColor;
    UIColor *_contactNameColorHighlighted;
    UIFont *_contactStatusFont;
    UIFont *_contactStatusFontItalic;
    UIColor *_contactStatusColor;
    UIColor *_contactStatusColorHighlighted;
    UIFont *_contactDetailsFont;
    UIColor *_contactDetailsColor;
    UIColor *_contactDetailsColorHighlighted;
    UIFont *_chatNameFont;
    UIFont *_chatMessageFont;
    UIFont *_chatTimestampFont;
    UIFont *_bubbleContactNameFont;
    UIFont *_bubblePushNameFont;
    UIFont *_bubbleEventFont;
    UIFont *_bubbleDateFont;
    UIFont *_bubbleMessageFont;
    UIFont *_bubbleTimestampFont;
    UIFont *_bubbleVCardFont;
    UIColor *_messageTextColor;
    UIFont *_tooltipFont;
    UIColor *_chatTimestampColor;
    UIColor *_chatTimestampColorHighlighted;
    struct CGSize _tableViewFooterTextShadowOffset;
}

+ (id)colorPalette;
+ (id)defaultTheme;
- (id)chatTimestampColorHighlighted;
- (id)chatTimestampColor;
- (id)tooltipFont;
- (id)messageTextColor;
- (id)bubbleVCardFont;
- (id)bubbleTimestampFont;
- (id)bubbleMessageFont;
- (id)bubbleDateFont;
- (id)bubbleEventFont;
- (id)bubblePushNameFont;
- (id)bubbleContactNameFont;
- (id)chatTimestampFont;
- (id)chatMessageFont;
- (id)chatNameFont;
- (id)contactDetailsColorHighlighted;
- (id)contactDetailsColor;
- (id)contactDetailsFont;
- (id)contactStatusColorHighlighted;
- (id)contactStatusColor;
- (id)contactStatusFontItalic;
- (id)contactStatusFont;
- (id)contactNameColorHighlighted;
- (id)contactNameColor;
- (id)waContactNameFont;
- (id)contactNameFont;
- (float)forwardPickerTableRowHeight;
- (float)favoritesTableRowHeight;
- (float)waContactTableRowHeight;
- (float)contactsTableRowHeight;
- (id)helperTextBackgroundColor;
- (id)helperTextColor;
- (id)disabledTintColor;
- (id)accentColor;
- (id)tintColor;
- (int)tableViewFooterTextAlignment;
- (struct CGSize)tableViewFooterTextShadowOffset;
- (id)tableViewFooterTextShadowColor;
- (id)tableViewFooterTextColor;
- (id)tableViewFooterFont;
- (id)tableViewCellSeparatorColor;
- (id)tableViewCellHighlightedBackgroundColor;
- (id)tableViewCellDestructiveTextColor;
- (id)tableViewCellTextColorSelected;
- (id)tableViewCellTextColor;
- (int)tableViewCellActionTextAlignment;
- (int)tableViewCellDefaultTextAlignment;
- (id)tableViewTextFieldTextColor;
- (float)chatsTableRowHeight;
- (id)genericTableCellFont;
- (float)genericTableRowHeight;
- (int)groupedTableViewCellSeparatorStyle;
- (void).cxx_destruct;
- (id)highlightedTintColorForColor:(id)fp8;
- (void)reloadTintColorInWindow:(id)fp8;
- (id)tableViewCellActionTextColor;
- (id)messageHighlightedUrlColor;
- (id)messageUrlColor;
- (void)resetContactNameColors;
- (id)contactNameColorForJID:(id)fp8;
- (id)colorListFilePath;
- (void)setInWindow:(id)fp8;
- (id)blurredWallpaperImage;
- (id)wallpaperImage;
- (void)generateBlurredWallpaper;
- (void)loadWallpaper;
- (void)setNeedsReloadWallpaper;
- (void)wallpaperDidChange:(id)fp8;
- (id)helperTextLabelWithFrame:(struct CGRect)fp8;
- (void)reloadFonts;
- (void)contentSizeCategoryDidChange:(id)fp8;
- (void)reloadDynamicTypeFontSize;
- (void)setFontSize:(float)fp8;
- (int)fontIndexForSize:(int)fp8;
- (int)fontSizeForIndex:(int)fp8;
- (id)fontNameForIndex:(int)fp8;
- (int)numberOfFonts;
- (int)defaultFontSize;
- (int)fontSize;
- (id)fontName;
- (void)dealloc;
- (id)init;

@end
