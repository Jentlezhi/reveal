//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (BU_Utilities)
- (void)bu_removeObjectAtIndexSafely:(unsigned long long)arg1;
- (id)bu_objectAtIndexSafely:(unsigned long long)arg1;
- (void)bu_safeRemoveObject:(id)arg1;
- (void)bu_safeInsertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)bu_safeInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)bu_safeAddNilObject;
- (void)bu_safeAddObject:(id)arg1;
@end

