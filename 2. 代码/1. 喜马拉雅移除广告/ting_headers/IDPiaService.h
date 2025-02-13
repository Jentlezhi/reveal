//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDService.h"

#import "IDEtchSessionPiaDelegate-Protocol.h"

@class NSString;
@protocol IDPiaServiceDelegate;

@interface IDPiaService : IDService <IDEtchSessionPiaDelegate>
{
    int _piaServiceState;
    id <IDPiaServiceDelegate> _delegate;
}

@property int piaServiceState; // @synthesize piaServiceState=_piaServiceState;
@property __weak id <IDPiaServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)requestReturnCodeForRequestReturnData:(id)arg1;
- (int)contentTypeForInputRequestData:(id)arg1;
- (void)session:(id)arg1 piaService:(long long)arg2 handlePiaEvent:(int)arg3 payload:(id)arg4;
- (_Bool)disposeWithError:(id *)arg1;
- (_Bool)exportWasSuccessful:(_Bool)arg1 error:(id *)arg2;
- (_Bool)exportFailedConfirmationWithError:(id *)arg1;
- (_Bool)exportWasSuccessfulConfirmationWithError:(id *)arg1;
- (_Bool)import:(id)arg1 error:(id *)arg2;
- (_Bool)requestWithData:(id)arg1 error:(id *)arg2;
- (_Bool)requestWithType:(int)arg1 error:(id *)arg2;
- (id)initWithEtchSession:(id)arg1 handle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

