//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSDictionary, NSString, UIFont;

@interface WBPageSingleTextCard : WBPageCard
{
    NSString *content;
    NSString *subTitle;
    NSString *flagImageUrl;
    _Bool isBolded;
    _Bool type;
    _Bool new_info;
    _Bool _isHideBubbleOutside;
    _Bool _hotType;
    int _content_style;
    long long textAlignment;
    NSString *icon;
    double flagImageWidth;
    double flagImageHeight;
    NSString *bType;
    NSString *levelIconUrl;
    NSString *signIconUrl;
    UIFont *_contentFont;
    NSDictionary *_locationDic;
    NSString *_contentColor;
    UIFont *_subTitleFont;
    NSString *_localImageName;
    NSString *_avatarUrl;
    long long _iconStyle;
    NSString *_rightDesc;
    NSString *_cardBgcolor;
}

+ (Class)fangleTableCellClass;
+ (Class)viewClass;
+ (Class)tableViewCellClass;
@property(nonatomic) _Bool hotType; // @synthesize hotType=_hotType;
@property(nonatomic) _Bool isHideBubbleOutside; // @synthesize isHideBubbleOutside=_isHideBubbleOutside;
@property(retain, nonatomic) NSString *cardBgcolor; // @synthesize cardBgcolor=_cardBgcolor;
@property(nonatomic) int content_style; // @synthesize content_style=_content_style;
@property(retain, nonatomic) NSString *rightDesc; // @synthesize rightDesc=_rightDesc;
@property(nonatomic) long long iconStyle; // @synthesize iconStyle=_iconStyle;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *localImageName; // @synthesize localImageName=_localImageName;
@property(retain, nonatomic) UIFont *subTitleFont; // @synthesize subTitleFont=_subTitleFont;
@property(copy, nonatomic) NSString *contentColor; // @synthesize contentColor=_contentColor;
@property(retain, nonatomic) NSDictionary *locationDic; // @synthesize locationDic=_locationDic;
@property(retain, nonatomic) UIFont *contentFont; // @synthesize contentFont=_contentFont;
@property(nonatomic) _Bool new_info; // @synthesize new_info;
@property(nonatomic) _Bool type; // @synthesize type;
@property(retain, nonatomic) NSString *signIconUrl; // @synthesize signIconUrl;
@property(retain, nonatomic) NSString *levelIconUrl; // @synthesize levelIconUrl;
@property(retain, nonatomic) NSString *bType; // @synthesize bType;
@property(nonatomic) double flagImageHeight; // @synthesize flagImageHeight;
@property(nonatomic) double flagImageWidth; // @synthesize flagImageWidth;
@property(nonatomic) _Bool isBolded; // @synthesize isBolded;
@property(retain, nonatomic) NSString *icon; // @synthesize icon;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment;
@property(retain, nonatomic) NSString *flagImageUrl; // @synthesize flagImageUrl;
@property(retain, nonatomic) NSString *content; // @synthesize content;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)updateWithDictionary:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *scheme; // @dynamic scheme;

@end

