//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, UIViewController, WBCardListBaseItem, WBPageCard, WBPageEngine;

@protocol WBPageEngineDelegate <NSObject>
- (_Bool)isDynamicList;
- (_Bool)isListPageForEngine:(WBPageEngine *)arg1 withCard:(WBPageCard *)arg2;
- (_Bool)cacheForEngine:(WBPageEngine *)arg1;
- (_Bool)needLoadAsyncCardsForEngine:(WBPageEngine *)arg1;
- (Class)modelClassForPageEngine:(WBPageEngine *)arg1;

@optional
- (_Bool)logIfNeed;
- (UIViewController *)getCurrentViewController;
- (NSString *)apiPathForPageEngine:(WBPageEngine *)arg1;
- (_Bool)needRemovePreviousPolicyCacheForEngine:(WBPageEngine *)arg1;
- (unsigned long long)cachePolicyForEngine:(WBPageEngine *)arg1;
- (void)pageDataDidReceivedFromNetwork:(id)arg1 error:(NSError *)arg2;
- (WBCardListBaseItem *)customCacheForEngine:(WBPageEngine *)arg1;
@end

