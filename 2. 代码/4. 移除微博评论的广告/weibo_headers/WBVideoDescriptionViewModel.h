//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WBTimelineAttributedText;
@protocol WBVideoDescriptionViewDataSource;

@interface WBVideoDescriptionViewModel : NSObject
{
    _Bool _needLayout;
    id <WBVideoDescriptionViewDataSource> _dataSource;
    WBTimelineAttributedText *_durationLabelText;
    WBTimelineAttributedText *_titleText;
    WBTimelineAttributedText *_subtitleText;
    long long _videoInterfaceStyle;
    double _titleTextFontSize;
    struct CGSize _layoutSize;
    struct UIEdgeInsets _layoutInsets;
    struct CGRect _coverFrame;
    struct CGRect _durationLabelFrame;
    struct CGRect _durationBackgrouondFrame;
    struct CGRect _titleFrame;
    struct CGRect _subtitleFrame;
}

@property(nonatomic) _Bool needLayout; // @synthesize needLayout=_needLayout;
@property(nonatomic) double titleTextFontSize; // @synthesize titleTextFontSize=_titleTextFontSize;
@property(nonatomic) long long videoInterfaceStyle; // @synthesize videoInterfaceStyle=_videoInterfaceStyle;
@property(retain, nonatomic) WBTimelineAttributedText *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(nonatomic) struct CGRect subtitleFrame; // @synthesize subtitleFrame=_subtitleFrame;
@property(retain, nonatomic) WBTimelineAttributedText *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(retain, nonatomic) WBTimelineAttributedText *durationLabelText; // @synthesize durationLabelText=_durationLabelText;
@property(nonatomic) struct CGRect durationBackgrouondFrame; // @synthesize durationBackgrouondFrame=_durationBackgrouondFrame;
@property(nonatomic) struct CGRect durationLabelFrame; // @synthesize durationLabelFrame=_durationLabelFrame;
@property(nonatomic) struct CGRect coverFrame; // @synthesize coverFrame=_coverFrame;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
@property(nonatomic) __weak id <WBVideoDescriptionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *coverImageUrl;
- (void)prepareLayoutWithSize:(struct CGSize)arg1;
- (void)setNeedsRefreshLayout;

@end

