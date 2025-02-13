//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMNoticeStatusModel, WBContentImageView, WBTimelineLargeCardTextView;
@protocol MMNoticeFlowBigVideoViewDelegate;

@interface MMNoticeFlowBigVideoView : UIView
{
    MMNoticeStatusModel *_statusMode;
    id <MMNoticeFlowBigVideoViewDelegate> _delegate;
    WBContentImageView *_pictureImageView;
    WBTimelineLargeCardTextView *_titleLabel;
    WBTimelineLargeCardTextView *_viewsLabel;
    WBTimelineLargeCardTextView *_durationLabel;
}

@property(retain, nonatomic) WBTimelineLargeCardTextView *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) WBTimelineLargeCardTextView *viewsLabel; // @synthesize viewsLabel=_viewsLabel;
@property(retain, nonatomic) WBTimelineLargeCardTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WBContentImageView *pictureImageView; // @synthesize pictureImageView=_pictureImageView;
@property(nonatomic) __weak id <MMNoticeFlowBigVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMNoticeStatusModel *statusMode; // @synthesize statusMode=_statusMode;
- (void).cxx_destruct;
- (void)pictureTapAction:(id)arg1;
- (void)selfTapAction:(id)arg1;
- (double)_caculateTextHeightWithLines:(id)arg1 maxWidth:(double)arg2;
- (id)_linesWithText:(id)arg1 font:(id)arg2 textColor:(id)arg3 limitsCount:(long long)arg4 lineSpacing:(double)arg5;
- (id)_durationLabelText;
- (void)_setupGestureRecognizer;
- (void)_setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

