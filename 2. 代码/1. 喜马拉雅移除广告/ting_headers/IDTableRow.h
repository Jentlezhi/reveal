//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDTableRow : NSObject
{
    NSMutableArray *_variants;
}

+ (id)new;
+ (id)rowWithColumns:(unsigned long long)arg1;
- (void).cxx_destruct;
- (_Bool)isEqualToTableRow:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long columns;
- (id)objectEnumerator;
- (id)itemAtColumn:(long long)arg1;
- (void)setItem:(id)arg1 atColumn:(long long)arg2;
- (id)init;
- (id)initWithColumns:(unsigned long long)arg1;

@end

