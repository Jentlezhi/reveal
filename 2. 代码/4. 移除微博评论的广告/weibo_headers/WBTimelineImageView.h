//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBContentImageView.h"

#import "WBDebugPageProtocol-Protocol.h"
#import "WBVideoPlayerSourceView-Protocol.h"

@class NSString, UIColor, WBStatus, WBTimelinePicture;

@interface WBTimelineImageView : WBContentImageView <WBVideoPlayerSourceView, WBDebugPageProtocol>
{
    _Bool _disableAutoPlay;
    WBTimelinePicture *_picture;
    WBStatus *_status;
    UIColor *_unchangableBackgroundColor;
}

+ (_Bool)debugSwitchState;
+ (void)debugSwitchDidClick:(_Bool)arg1;
+ (id)debugTitle;
@property(retain, nonatomic) UIColor *unchangableBackgroundColor; // @synthesize unchangableBackgroundColor=_unchangableBackgroundColor;
@property(nonatomic) _Bool disableAutoPlay; // @synthesize disableAutoPlay=_disableAutoPlay;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) WBTimelinePicture *picture; // @synthesize picture=_picture;
- (void).cxx_destruct;
- (void)showThumbImageFocusInRect:(struct CGRect)arg1 showRect:(struct CGRect)arg2 protectRect:(struct CGRect)arg3 context:(struct CGContext *)arg4;
- (id)accessibilityIdentifier;
- (id)contentView;
- (struct CGRect)videoplayer_contentsRect;
- (_Bool)videoPlayer_shouldEnterFullScreen;
- (_Bool)videoPlayer_gifVideo;
- (_Bool)videoPlayer_videoTimelineDisabled;
- (id)mediaPlaybackStatus;
- (id)mediaPlaybackAnalysisPageInfo;
- (id)mediaPlaybackExtraLogParameters;
- (id)mediaPlaybackPlaceholderImageURL;
- (id)mediaPlaybackPlaceholderWithLoadedStatus:(_Bool *)arg1;
- (_Bool)supportsInlineMediaPlayback;
- (id)mediaPlaybackItem;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawWithFixedImage:(id)arg1 desiredImageFrame:(struct CGRect)arg2 rect:(struct CGRect)arg3 contentMode:(long long *)arg4 context:(struct CGContext *)arg5 components:(id)arg6;
- (struct CGRect)caculateProtectPositionWithImageSize:(struct CGSize)arg1 orignalRect:(struct CGRect)arg2 protectRect:(struct CGRect)arg3;
- (id)currentDrawingUserInfo;
- (id)currentProtectPosition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

