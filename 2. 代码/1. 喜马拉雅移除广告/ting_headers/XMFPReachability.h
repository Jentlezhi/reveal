//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMFPReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (id)telephonyNetworkInfo;
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;
+ (id)reachabilityForInternetConnection;
- (id)networkStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (id)currentReachabilityStatus;

@end

