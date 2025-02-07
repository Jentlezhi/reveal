//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TBLiveInterComponentProtocol-Protocol.h"

@class NSDictionary, NSString, TBLiveInterComponentContext, TBLiveInteractiveModel, UIViewController;
@protocol TBLiveInterRenderProtocol;

@interface TBLiveInterBaseComponent : NSObject <TBLiveInterComponentProtocol>
{
    NSString *_url;
    NSDictionary *_jsData;
    TBLiveInteractiveModel *_interModel;
    long long _renderState;
    TBLiveInterComponentContext *_context;
    UIViewController *_sourceViewController;
    id <TBLiveInterRenderProtocol> _componentController;
}

@property(nonatomic) __weak id <TBLiveInterRenderProtocol> componentController; // @synthesize componentController=_componentController;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic) TBLiveInterComponentContext *context; // @synthesize context=_context;
@property(nonatomic) long long renderState; // @synthesize renderState=_renderState;
@property(retain, nonatomic) TBLiveInteractiveModel *interModel; // @synthesize interModel=_interModel;
@property(retain, nonatomic) NSDictionary *jsData; // @synthesize jsData=_jsData;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)didRenderViewFailure:(id)arg1;
- (void)didRenderViewSuccess:(id)arg1;
- (void)removeView;
- (void)updateUserInfo:(id)arg1;
- (void)renderViewWithUrl:(id)arg1;
- (void)refreshComponent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

