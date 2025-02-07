//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBChainAction.h"

@interface NodeFetcher : WBChainAction
{
    CDUnknownBlockType _resolverRef;
    _Bool _isCancelled;
    long long _version;
}

@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)fetcherEntryWithCompleteBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)_failedWithError:(id)arg1;
- (void)_fullfillWithObj:(id)arg1;
- (void)cancel;
- (void)fetch;
- (id)init;
- (id)initWithNodeTemplateVersion:(long long)arg1;

@end

