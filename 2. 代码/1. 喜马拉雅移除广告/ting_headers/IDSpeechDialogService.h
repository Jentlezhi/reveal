//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDService.h"

#import "IDEtchSessionSdsDelegate-Protocol.h"

@class NSString;
@protocol IDSpeechDialogServiceDelegate;

@interface IDSpeechDialogService : IDService <IDEtchSessionSdsDelegate>
{
    id <IDSpeechDialogServiceDelegate> _delegate;
}

@property __weak id <IDSpeechDialogServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)session:(id)arg1 speechDialogService:(long long)arg2 handleSdsEvent:(unsigned long long)arg3 parameters:(id)arg4;
- (_Bool)disposeWithError:(id *)arg1;
- (void)deregisterIntentWithIdentifier:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerIntentWithWithIdentifier:(long long)arg1 dialogToken:(long long)arg2 appName:(id)arg3 isGlobal:(_Bool)arg4 payload:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)registerLocalIntentWithIdentifier:(long long)arg1 dialogToken:(long long)arg2 payload:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)registerGlobalIntentWithIdentifier:(long long)arg1 appName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)controlDialogWithCommand:(unsigned long long)arg1 dialogToken:(long long)arg2 parameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)takeOverDialogWithDialogToken:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

