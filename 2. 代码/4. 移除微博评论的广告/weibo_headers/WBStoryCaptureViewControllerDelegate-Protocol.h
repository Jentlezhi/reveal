//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, WBMediaEditorCache, WBStoryCaptureViewController;
@protocol WBStoryMediaCache;

@protocol WBStoryCaptureViewControllerDelegate <NSObject>
- (void)storyCaptureViewController:(WBStoryCaptureViewController *)arg1 didFinishWithMediaCache:(WBMediaEditorCache<WBStoryMediaCache> *)arg2 isNeedClip:(_Bool)arg3;
- (void)storyCaptureViewController:(WBStoryCaptureViewController *)arg1 didPressBackButton:(UIButton *)arg2;
@end

