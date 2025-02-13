//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KKWebViewBridge-Protocol.h"

@class JSValue, UIViewController;
@protocol KKWebViewBridgeViewController;

@interface KKWebViewBridge : NSObject <KKWebViewBridge>
{
    UIViewController<KKWebViewBridgeViewController> *_viewController;
    JSValue *_onevent;
    JSValue *_onappforeground;
    JSValue *_onappbackground;
    CDUnknownBlockType _onEvent;
}

@property(copy, nonatomic) CDUnknownBlockType onEvent; // @synthesize onEvent=_onEvent;
@property(retain, nonatomic) JSValue *onappbackground; // @synthesize onappbackground=_onappbackground;
@property(retain, nonatomic) JSValue *onappforeground; // @synthesize onappforeground=_onappforeground;
@property(retain, nonatomic) JSValue *onevent; // @synthesize onevent=_onevent;
@property(readonly, nonatomic) __weak UIViewController<KKWebViewBridgeViewController> *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)gesture:(id)arg1;
- (void)style:(id)arg1 data:(id)arg2;
- (void)close;
- (void)commit;
- (void)off:(id)arg1 name:(id)arg2;
- (void)on:(id)arg1 name:(id)arg2;
- (void)set:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)remove:(id)arg1;
- (void)add:(id)arg1 name:(id)arg2 attrs:(id)arg3 parentId:(id)arg4;
- (void)UIApplicationWillEnterForegroundNotification;
- (void)UIApplicationDidEnterBackgroundNotification;
- (id)initWithViewController:(id)arg1;
- (void)dealloc;

@end

