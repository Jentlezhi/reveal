//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBIMessage-Protocol.h"

@class NSString;

@interface WBIMessageForWeibo : NSObject <WBIMessage>
{
    NSString *_content;
    id _attachment;
    NSString *_shareCallBackId;
}

@property(copy, nonatomic) NSString *shareCallBackId; // @synthesize shareCallBackId=_shareCallBackId;
@property(retain, nonatomic) id attachment; // @synthesize attachment=_attachment;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

