//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatScrollViewController-Protocol.h"

@class XMCommunityTabInfo;

@protocol XMCommunityArticleListCtrl <XMChatScrollViewController>
@property(nonatomic) _Bool automaticallyRequestData;
@property(retain, nonatomic) XMCommunityTabInfo *tabInfo;
@property(nonatomic) __weak id delegate;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (void)triggerPullToRefresh;
- (_Bool)hasEverRequestData;
@end

