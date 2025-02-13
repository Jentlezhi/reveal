//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSkinCoverLayer, WBSkinCoverWindow;

@interface WBSkinCoverManager : NSObject
{
    _Bool _featureOpen;
    _Bool _skinCoverWindowVisible;
    WBSkinCoverLayer *_skinCoverLayer;
    WBSkinCoverWindow *_skinCoverWindow;
}

+ (_Bool)shouldCoverSkin;
+ (void)methodSwizzling;
+ (id)sharedManager;
@property(nonatomic) _Bool skinCoverWindowVisible; // @synthesize skinCoverWindowVisible=_skinCoverWindowVisible;
@property(nonatomic) _Bool featureOpen; // @synthesize featureOpen=_featureOpen;
@property(retain, nonatomic) WBSkinCoverWindow *skinCoverWindow; // @synthesize skinCoverWindow=_skinCoverWindow;
@property(retain, nonatomic) WBSkinCoverLayer *skinCoverLayer; // @synthesize skinCoverLayer=_skinCoverLayer;
- (void).cxx_destruct;
- (void)updateCoverWindowIfNeed;
- (void)dealloc;
- (void)accountDidChangeNotification:(id)arg1;
- (void)userSettingsCoverSkinModeDidChangeNotification:(id)arg1;
- (void)handleRemoteVCDismissNoti:(id)arg1;
- (void)handleRemoteVCPresentNoti:(id)arg1;
- (void)updateWindowHiddenState;
- (void)deviceOrientationDidChange:(id)arg1;
- (id)init;
- (void)close;
- (void)open;

@end

