//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (SafeKit)
+ (void)safekit_swizzleMutableArrayMethod;
+ (void)enableProtect;
+ (void)load;
- (void)safekit_hookRemoveObjectsInRange:(struct _NSRange)arg1;
- (void)safekit_hookReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)safekit_hookRemoveObjectAtIndex:(unsigned long long)arg1;
- (void)safekit_hookInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)safekit_hookAddObject:(id)arg1;
- (id)safekit_hookObjectAtIndexedSubscript:(long long)arg1;
- (id)safekit_hookSubarrayWithRange:(struct _NSRange)arg1;
- (id)safekit_hookObjectAtIndex:(unsigned long long)arg1;
@end

