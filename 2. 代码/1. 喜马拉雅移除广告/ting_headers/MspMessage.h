//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol MspMessageProtocol;

@interface MspMessage : NSObject
{
    NSMutableData *_messageData;
    id <MspMessageProtocol> _delegate;
}

@property(nonatomic) id <MspMessageProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableData *messageData; // @synthesize messageData=_messageData;
- (void).cxx_destruct;
- (void)createMessageWithSegmentBodyData:(id)arg1 messageType:(int)arg2 transID:(int)arg3;
- (id)initWithSegmentBodyData:(id)arg1 messageType:(int)arg2 transID:(int)arg3 delegate:(id)arg4;

@end

