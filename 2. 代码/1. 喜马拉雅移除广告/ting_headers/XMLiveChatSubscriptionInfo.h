//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol XMLiveChatSubscriptionInfoDelegate;

@interface XMLiveChatSubscriptionInfo : NSObject
{
    NSString *_subscriptionKey;
    id <XMLiveChatSubscriptionInfoDelegate> _subscriptionDelegate;
}

@property(nonatomic) __weak id <XMLiveChatSubscriptionInfoDelegate> subscriptionDelegate; // @synthesize subscriptionDelegate=_subscriptionDelegate;
@property(retain, nonatomic) NSString *subscriptionKey; // @synthesize subscriptionKey=_subscriptionKey;
- (void).cxx_destruct;

@end

