//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTagItem.h"

@class NSString;

@interface XMKeywordItem : XMTagItem
{
    long long kId;
    NSString *kname;
}

@property(copy, nonatomic) NSString *kname; // @synthesize kname;
@property(nonatomic) long long kId; // @synthesize kId;
- (void).cxx_destruct;
- (void)updatePropertiesFromPopDictionary:(id)arg1;
- (void)dealloc;

@end

