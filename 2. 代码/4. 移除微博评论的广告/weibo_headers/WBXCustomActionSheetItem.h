//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIColor, UIImage;

@interface WBXCustomActionSheetItem : NSObject
{
    _Bool _isItemDisabled;
    long long _itemType;
    NSString *_itemTitle;
    NSString *_itemSubTitle;
    UIColor *_itemTitleColor;
    UIImage *_itemIcon;
    UIImage *_itemHighlightedIcon;
    unsigned long long _iconLevel;
    CDUnknownBlockType _itemSelectBlock;
    long long _tag;
    NSDictionary *_userInfo;
    long long _showPackageType;
    NSString *_cornerBadgeURL;
}

+ (id)itemWithItemType:(long long)arg1 Title:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3;
+ (id)itemWithItemType:(long long)arg1 Title:(id)arg2 TitleColor:(id)arg3 andCompletionBlock:(CDUnknownBlockType)arg4;
+ (id)itemWithItemType:(long long)arg1 Title:(id)arg2 Icon:(id)arg3 highlightedIcon:(id)arg4 andCompletionBlock:(CDUnknownBlockType)arg5;
+ (id)itemWithItemType:(long long)arg1 Title:(id)arg2 subTitle:(id)arg3 Icon:(id)arg4 highlightedIcon:(id)arg5 andIconLevel:(unsigned long long)arg6 andCompletionBlock:(CDUnknownBlockType)arg7;
+ (id)itemWithItemType:(long long)arg1 Title:(id)arg2 Icon:(id)arg3 highlightedIcon:(id)arg4 andIconLevel:(unsigned long long)arg5 andCompletionBlock:(CDUnknownBlockType)arg6;
+ (id)itemWithItemType:(long long)arg1 Title:(id)arg2 TitleColor:(id)arg3 Icon:(id)arg4 highlightedIcon:(id)arg5 andCompletionBlock:(CDUnknownBlockType)arg6;
+ (id)itemWithItemType:(long long)arg1 Title:(id)arg2 TitleColor:(id)arg3 Icon:(id)arg4 highlightedIcon:(id)arg5 andIconLevel:(unsigned long long)arg6 andCompletionBlock:(CDUnknownBlockType)arg7;
@property(retain, nonatomic) NSString *cornerBadgeURL; // @synthesize cornerBadgeURL=_cornerBadgeURL;
@property(nonatomic) long long showPackageType; // @synthesize showPackageType=_showPackageType;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(copy, nonatomic) CDUnknownBlockType itemSelectBlock; // @synthesize itemSelectBlock=_itemSelectBlock;
@property(nonatomic) _Bool isItemDisabled; // @synthesize isItemDisabled=_isItemDisabled;
@property(nonatomic) unsigned long long iconLevel; // @synthesize iconLevel=_iconLevel;
@property(retain, nonatomic) UIImage *itemHighlightedIcon; // @synthesize itemHighlightedIcon=_itemHighlightedIcon;
@property(retain, nonatomic) UIImage *itemIcon; // @synthesize itemIcon=_itemIcon;
@property(retain, nonatomic) UIColor *itemTitleColor; // @synthesize itemTitleColor=_itemTitleColor;
@property(copy, nonatomic) NSString *itemSubTitle; // @synthesize itemSubTitle=_itemSubTitle;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithItemType:(long long)arg1 Title:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3;
- (id)initWithItemType:(long long)arg1 Title:(id)arg2 TitleColor:(id)arg3 andCompletionBlock:(CDUnknownBlockType)arg4;
- (id)initWithItemType:(long long)arg1 Title:(id)arg2 Icon:(id)arg3 highlightedIcon:(id)arg4 andCompletionBlock:(CDUnknownBlockType)arg5;
- (id)initWithItemType:(long long)arg1 Title:(id)arg2 Icon:(id)arg3 highlightedIcon:(id)arg4 andIconLevel:(unsigned long long)arg5 andCompletionBlock:(CDUnknownBlockType)arg6;
- (id)initWithItemType:(long long)arg1 Title:(id)arg2 TitleColor:(id)arg3 Icon:(id)arg4 highlightedIcon:(id)arg5 andCompletionBlock:(CDUnknownBlockType)arg6;
- (id)initWithItemType:(long long)arg1 Title:(id)arg2 subTitle:(id)arg3 TitleColor:(id)arg4 Icon:(id)arg5 highlightedIcon:(id)arg6 andIconLevel:(unsigned long long)arg7 andCompletionBlock:(CDUnknownBlockType)arg8;
- (id)initWithItemType:(long long)arg1 Title:(id)arg2 TitleColor:(id)arg3 Icon:(id)arg4 highlightedIcon:(id)arg5 andIconLevel:(unsigned long long)arg6 andCompletionBlock:(CDUnknownBlockType)arg7;

@end

