//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

#import "WBPageHeadlineRankFootViewDelegate-Protocol.h"

@class NSString, UIControl, WBPageHeadlineRankContentView, WBPageHeadlineRankFootView, WBStatus;

@interface WBPageHeadlineRankCardView : WBPageCardViewBase <WBPageHeadlineRankFootViewDelegate>
{
    WBPageHeadlineRankContentView *_rankContentView;
    WBPageHeadlineRankFootView *_rankFootView;
    UIControl *_backgroundControl;
    WBStatus *_status;
}

+ (void)load;
+ (struct UIEdgeInsets)edgeInsetsBubbleOutside;
+ (double)heightOfDataObject:(id)arg1 constraintToWidth:(double)arg2;
+ (_Bool)timelineIntegratable;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) UIControl *backgroundControl; // @synthesize backgroundControl=_backgroundControl;
@property(retain, nonatomic) WBPageHeadlineRankFootView *rankFootView; // @synthesize rankFootView=_rankFootView;
@property(retain, nonatomic) WBPageHeadlineRankContentView *rankContentView; // @synthesize rankContentView=_rankContentView;
- (void).cxx_destruct;
- (id)mediaExposureExtraLogParameters;
- (id)mediaExposureItem;
- (unsigned long long)wbvideo_sceneType;
- (unsigned long long)observerOptions;
- (void)headlineRankFootView:(id)arg1 didPressContentButton:(id)arg2;
- (void)headlineRankFootView:(id)arg1 didPressAvatarButton:(id)arg2;
- (id)_logParams;
- (void)logClickForStatus;
- (void)backgroundAreaPressed:(id)arg1;
- (id)currentStatus;
- (void)updateViews;
- (void)setPageCard:(id)arg1;
- (long long)selectionCellStyle;
- (void)layoutSubviews;
- (_Bool)highlightCellBackgroundWhenPressed;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

