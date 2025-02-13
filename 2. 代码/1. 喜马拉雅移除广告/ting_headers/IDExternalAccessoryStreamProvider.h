//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDStreamProvider-Protocol.h"

@class EASession, IDA4AProtocol, IDBackgroundTask, IDExternalAccessorySelector, NSString, NSTimer;
@protocol IDStreamProviderDelegate;

@interface IDExternalAccessoryStreamProvider : NSObject <IDStreamProvider>
{
    id <IDStreamProviderDelegate> _delegate;
    IDA4AProtocol *_A4AProtocol;
    double _setupEASessionStartupDelay;
    id _a4aAccessoryDidAppearObserver;
    id _a4aAccessoryDidDisappearObserver;
    EASession *_externalAccessorySession;
    NSTimer *_setupEASessionStartupTimer;
    IDExternalAccessorySelector *_externalAccessorySelector;
    IDBackgroundTask *_backgroundTask;
}

+ (id)new;
@property(retain) IDBackgroundTask *backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(readonly) IDExternalAccessorySelector *externalAccessorySelector; // @synthesize externalAccessorySelector=_externalAccessorySelector;
@property(retain) NSTimer *setupEASessionStartupTimer; // @synthesize setupEASessionStartupTimer=_setupEASessionStartupTimer;
@property(retain) EASession *externalAccessorySession; // @synthesize externalAccessorySession=_externalAccessorySession;
@property(retain) id a4aAccessoryDidDisappearObserver; // @synthesize a4aAccessoryDidDisappearObserver=_a4aAccessoryDidDisappearObserver;
@property(retain) id a4aAccessoryDidAppearObserver; // @synthesize a4aAccessoryDidAppearObserver=_a4aAccessoryDidAppearObserver;
@property double setupEASessionStartupDelay; // @synthesize setupEASessionStartupDelay=_setupEASessionStartupDelay;
@property(retain) IDA4AProtocol *A4AProtocol; // @synthesize A4AProtocol=_A4AProtocol;
@property __weak id <IDStreamProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)systemVersionRequiresEASessionStartupDelay:(id)arg1;
- (double)startupDelayForEASession;
- (_Bool)hasActiveExternalAccesorrySession;
- (void)informDelegateAndCleanUp;
- (void)handleSetupEASessionStartupTimer:(id)arg1;
- (void)setupExternalAccessorySession:(id)arg1 afterDelay:(double)arg2;
- (void)setupExternalAccessorySession:(id)arg1;
- (void)cancelExternalAccessorySessionSetup;
- (void)startExternalAccessorySessionSetup:(id)arg1;
- (void)resetWithA4AProtocol:(id)arg1;
- (void)reset;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;
- (id)initWithA4AProtocol:(id)arg1 externalAccessorySelector:(id)arg2;
- (id)initWithA4AProtocol:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

