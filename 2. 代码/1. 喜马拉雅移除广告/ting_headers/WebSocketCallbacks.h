//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WebSocketCallbacks : NSObject
{
    NSString *_onClose;
    NSString *_onError;
    NSString *_onMessage;
    NSString *_onOpen;
}

@property(copy, nonatomic) NSString *onOpen; // @synthesize onOpen=_onOpen;
@property(copy, nonatomic) NSString *onMessage; // @synthesize onMessage=_onMessage;
@property(copy, nonatomic) NSString *onError; // @synthesize onError=_onError;
@property(copy, nonatomic) NSString *onClose; // @synthesize onClose=_onClose;
- (void).cxx_destruct;

@end

