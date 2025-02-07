//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABQProtocolMap-Protocol.h"

@class NSDictionary, NSString;

@interface ABQStaticProtocolMap : NSObject <ABQProtocolMap>
{
    NSDictionary *_map;
}

@property(readonly, copy, nonatomic) NSDictionary *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (id)protocolForAppWithName:(id)arg1;
- (struct NSDictionary *)dictionaryRepresentation;
- (id)initWithAppStartUpInfoList:(struct NSArray *)arg1 accessoryProtocols:(id)arg2;
- (id)initWithDictionaryRepresentation:(struct NSDictionary *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

