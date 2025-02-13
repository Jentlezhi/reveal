//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface XMJsonValueSearchConfiguration : NSObject
{
    NSString *_searchKey;
    unsigned long long _searchType;
    long long _maxCount;
    NSArray *_results;
}

@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
- (void).cxx_destruct;
- (_Bool)isFull;
- (void)addSearchResult:(id)arg1;
- (Class)searchedClass;

@end

