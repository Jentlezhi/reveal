//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, PHAsset, WBStoryDraftModel, WBStoryDuetItem, WBStoryMusicItem;
@protocol WBCameraProtocol, WBStoryCapturePanelDelegate;

@protocol WBStoryCapturePanel <NSObject>
@property(nonatomic) __weak id <WBStoryCapturePanelDelegate> delegate;
@property(nonatomic) __weak id <WBCameraProtocol> cameraManager;
@property(copy, nonatomic) CDUnknownBlockType captureBoomerngVideoAnimation;
@property(copy, nonatomic) CDUnknownBlockType willCapturePhotoAnimation;
@property(nonatomic) double speedRate;
@property(nonatomic) double videoDuration;
@property(nonatomic) unsigned long long cameraMode;
@property(readonly, nonatomic) _Bool isRecording;
@property(nonatomic) _Bool disableCapture;
- (void)setCaptureModes:(NSArray *)arg1;
- (void)showDraftGuideIfNeeded;
- (void)resumeDraft:(WBStoryDraftModel *)arg1;
- (NSArray *)overlayExpectRects;
- (void)setVisible:(_Bool)arg1 duration:(double)arg2;
- (void)dismissFooterViewAnimated:(_Bool)arg1;
- (void)showFooterViewAnimated:(_Bool)arg1;
- (void)dismissSubviewsAnimated:(_Bool)arg1;
- (void)showSubviewsAnimated:(_Bool)arg1;
- (void)updateDuetItem:(WBStoryDuetItem *)arg1;
- (void)updateMusicButton:(WBStoryMusicItem *)arg1;
- (void)updateAlbumButton:(PHAsset *)arg1;
- (void)updateSpeedRate:(double)arg1;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1 businessType:(unsigned long long)arg2 shootMode:(unsigned long long)arg3;
@end

