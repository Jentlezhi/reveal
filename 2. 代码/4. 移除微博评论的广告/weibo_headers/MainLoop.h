//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UILabel;

@interface MainLoop : NSObject
{
    id _displayLink;
    int _fps;
    float _systemVersion;
    _Bool _isAppActive;
    struct Application *_application;
    struct Scheduler *_scheduler;
    UILabel *_debugLabel;
    _Bool _isOpenDebugView;
    CDUnknownFunctionPointerType _preDrawCallback;
    CDUnknownFunctionPointerType _postDrawCallback;
    double _prevTime;
}

- (void)doCaller:(id)arg1;
- (void)setPostDrawCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setPreDrawCallback:(CDUnknownFunctionPointerType)arg1;
- (void)showDebugView:(_Bool)arg1;
- (void)setPreferredFPS:(int)arg1;
- (void)stopMainLoop;
- (void)startMainLoop;
- (void)firstStart:(id)arg1;
- (void)initLastDisplayTime;
- (void)appDidBecomeInactive;
- (void)appDidBecomeActive;
- (void)dealloc;
- (id)initWithApplication:(struct Application *)arg1;

@end

