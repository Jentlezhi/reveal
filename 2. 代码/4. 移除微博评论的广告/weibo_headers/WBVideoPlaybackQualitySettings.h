//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBVideoNetworkTypeObserver, WBVideoSceneQualityConfig, WBVideoSceneQualityConfigSet;

@interface WBVideoPlaybackQualitySettings : NSObject
{
    WBVideoSceneQualityConfigSet *_sceneQualityConfigSet;
    long long _feedMaxQualityIdex;
    double _lowerThanViewSizeQualityThreshold;
    WBVideoNetworkTypeObserver *_networkTypeObserver;
    long long _qualityLimitWIFI;
    long long _qualityLimitWWAN;
}

+ (id)globalSettings;
@property(nonatomic) long long qualityLimitWWAN; // @synthesize qualityLimitWWAN=_qualityLimitWWAN;
@property(nonatomic) long long qualityLimitWIFI; // @synthesize qualityLimitWIFI=_qualityLimitWIFI;
@property(nonatomic) WBVideoNetworkTypeObserver *networkTypeObserver; // @synthesize networkTypeObserver=_networkTypeObserver;
@property(readonly, nonatomic) double lowerThanViewSizeQualityThreshold; // @synthesize lowerThanViewSizeQualityThreshold=_lowerThanViewSizeQualityThreshold;
@property(readonly, nonatomic) long long feedMaxQualityIdex; // @synthesize feedMaxQualityIdex=_feedMaxQualityIdex;
- (void).cxx_destruct;
@property(readonly, nonatomic) WBVideoSceneQualityConfigSet *sceneQualityConfigSet; // @synthesize sceneQualityConfigSet=_sceneQualityConfigSet;
@property(readonly, nonatomic) WBVideoSceneQualityConfig *defaultQualityConfig;
- (id)qualityConfigForUICode:(id)arg1;
- (void)receiveServerSceneQualityConfigs:(id)arg1;
- (void)updateQualityLimitCache;
- (void)receivedServerConfig:(id)arg1;
- (void)userDidSelectQualityOption:(id)arg1;
- (void)userDidSelectAutomatic;
- (void)_updateCurrentQualityLimit:(long long)arg1;
@property(readonly, nonatomic) long long currentQualityLimit;
- (id)init;

@end

