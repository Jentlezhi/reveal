//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMRequest.h"

@interface XMRequest (monitorExtend)
+ (void)load;
- (void)didConnection:(id)arg1 didFinishCollectionMetrics:(id)arg2;
- (void)didConnectionDidFinishLoading:(id)arg1;
- (void)didConnection:(id)arg1 didReceiveData:(id)arg2;
- (void)didConnection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)didConnection:(id)arg1 didFailWithError:(id)arg2;
- (void)didConnection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)didConnectionStart:(id)arg1;
@end

