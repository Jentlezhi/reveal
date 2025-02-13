//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSMutableArray, NSString;

@interface WBTopicSort : WBModelObject
{
    _Bool _isCache;
    float _offset;
    NSString *_sortID;
    NSString *_sortName;
    NSMutableArray *_topics;
    NSString *_sinceID;
    long long _totalPageCount;
    long long _pageCount;
}

@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) long long totalPageCount; // @synthesize totalPageCount=_totalPageCount;
@property(retain, nonatomic) NSString *sinceID; // @synthesize sinceID=_sinceID;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) NSMutableArray *topics; // @synthesize topics=_topics;
@property(nonatomic) float offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *sortName; // @synthesize sortName=_sortName;
@property(retain, nonatomic) NSString *sortID; // @synthesize sortID=_sortID;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

