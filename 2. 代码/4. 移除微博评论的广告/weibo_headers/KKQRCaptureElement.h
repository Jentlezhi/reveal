//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKViewElement.h"

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"

@class NSString;

@interface KKQRCaptureElement : KKViewElement <AVCaptureMetadataOutputObjectsDelegate>
{
}

+ (void)initialize;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)setView:(id)arg1;
- (Class)viewClass;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

