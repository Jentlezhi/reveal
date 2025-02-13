//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SDLTransportDelegate;

@interface SDLAbstractTransport : NSObject
{
    id <SDLTransportDelegate> _delegate;
    NSString *_debugConsoleGroupName;
}

@property(retain) NSString *debugConsoleGroupName; // @synthesize debugConsoleGroupName=_debugConsoleGroupName;
@property __weak id <SDLTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)retryDelay;
- (void)dispose;
- (void)sendData:(id)arg1;
- (void)disconnect;
- (void)connect;
- (id)init;

@end

