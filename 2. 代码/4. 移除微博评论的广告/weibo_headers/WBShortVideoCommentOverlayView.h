//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBShortVideoBackButtonOverlayView.h"

@class WBLittleVideoCollectionLogManager, WBShortVideoCommentButton;

@interface WBShortVideoCommentOverlayView : WBShortVideoBackButtonOverlayView
{
    WBShortVideoCommentButton *_commentButton;
    WBLittleVideoCollectionLogManager *_logManager;
}

@property(retain, nonatomic) WBLittleVideoCollectionLogManager *logManager; // @synthesize logManager=_logManager;
@property(retain, nonatomic) WBShortVideoCommentButton *commentButton; // @synthesize commentButton=_commentButton;
- (void).cxx_destruct;
- (void)showBusinessSubviews;
- (void)hideBusinessSubviews;
- (void)showLoginView;
- (void)commentButtonClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 sharedContext:(id)arg2;

@end

