//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageSquarePhotoCard.h"

@class NSDictionary, NSString;

@interface WBPageSquarePhotoItem : WBPageSquarePhotoCard
{
    _Bool _isLocalImage;
    NSString *content;
    NSDictionary *actionlog;
    NSString *adid;
    NSString *contentTitle;
    NSString *cornerMarkUrl;
    NSString *bannerId;
    long long _contentFontSize;
    double _pageControlWidth;
    NSString *_productPrice;
    NSString *_cardSubType;
    NSString *_adTopTitle;
    NSDictionary *_video_tag;
    NSString *_mid_content;
    NSString *_mid_content_unit;
    NSString *_mid_content_desc;
    NSString *_rightBottomIconUrl;
    struct UIEdgeInsets _titleEdgInsets;
    struct UIEdgeInsets _viewEdgInsets;
}

+ (Class)viewClass;
@property(retain, nonatomic) NSString *rightBottomIconUrl; // @synthesize rightBottomIconUrl=_rightBottomIconUrl;
@property(retain, nonatomic) NSString *mid_content_desc; // @synthesize mid_content_desc=_mid_content_desc;
@property(retain, nonatomic) NSString *mid_content_unit; // @synthesize mid_content_unit=_mid_content_unit;
@property(retain, nonatomic) NSString *mid_content; // @synthesize mid_content=_mid_content;
@property(retain, nonatomic) NSDictionary *video_tag; // @synthesize video_tag=_video_tag;
@property(retain, nonatomic) NSString *adTopTitle; // @synthesize adTopTitle=_adTopTitle;
@property(retain, nonatomic) NSString *cardSubType; // @synthesize cardSubType=_cardSubType;
@property(retain, nonatomic) NSString *productPrice; // @synthesize productPrice=_productPrice;
@property struct UIEdgeInsets viewEdgInsets; // @synthesize viewEdgInsets=_viewEdgInsets;
@property(nonatomic) double pageControlWidth; // @synthesize pageControlWidth=_pageControlWidth;
@property struct UIEdgeInsets titleEdgInsets; // @synthesize titleEdgInsets=_titleEdgInsets;
@property(nonatomic) long long contentFontSize; // @synthesize contentFontSize=_contentFontSize;
@property(nonatomic) _Bool isLocalImage; // @synthesize isLocalImage=_isLocalImage;
@property(retain, nonatomic) NSString *bannerId; // @synthesize bannerId;
@property(retain, nonatomic) NSString *cornerMarkUrl; // @synthesize cornerMarkUrl;
@property(retain, nonatomic) NSString *contentTitle; // @synthesize contentTitle;
@property(retain, nonatomic) NSString *adid; // @synthesize adid;
@property(retain, nonatomic) NSDictionary *actionlog; // @synthesize actionlog;
@property(retain, nonatomic) NSString *content; // @synthesize content;
- (void).cxx_destruct;
- (void)dealloc;
- (id)primaryKey;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)setAdMonitorDisabled:(_Bool)arg1;
- (void)send3rdMonitorInfoIfNeeded:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *pic; // @dynamic pic;
@property(retain, nonatomic) NSString *scheme; // @dynamic scheme;

@end

