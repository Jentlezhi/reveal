//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol GDTRewardVideoAdNetworkAdapterProtocol;

@protocol GDTRewardVideoAdNetworkConnectorProtocol <NSObject>
- (void)adapter_rewardVideoAdDidPlayFinish:(id <GDTRewardVideoAdNetworkAdapterProtocol>)arg1;
- (void)adapter_rewardVideoAdDidRewardEffective:(id <GDTRewardVideoAdNetworkAdapterProtocol>)arg1;
- (void)adapter_rewardVideoAd:(id <GDTRewardVideoAdNetworkAdapterProtocol>)arg1 didFailWithError:(NSError *)arg2;
- (void)adapter_rewardVideoAdDidClicked:(id <GDTRewardVideoAdNetworkAdapterProtocol>)arg1;
- (void)adapter_rewardVideoAdDidClose:(id <GDTRewardVideoAdNetworkAdapterProtocol>)arg1;
- (void)adapter_rewardVideoAdDidExposed:(id <GDTRewardVideoAdNetworkAdapterProtocol>)arg1;
- (void)adapter_rewardVideoAdWillVisible:(id <GDTRewardVideoAdNetworkAdapterProtocol>)arg1;
- (void)adapter_rewardVideoAdVideoDidLoad:(id <GDTRewardVideoAdNetworkAdapterProtocol>)arg1;
- (void)adapter_rewardVideoAdDidLoad:(id <GDTRewardVideoAdNetworkAdapterProtocol>)arg1;
@end

