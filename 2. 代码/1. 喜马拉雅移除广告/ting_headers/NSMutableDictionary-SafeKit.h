//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (SafeKit)
+ (void)safekit_swizzleMutableDictionaryMethod;
+ (void)enableProtect;
+ (void)load;
- (void)safekit_hookSetObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)safekit_hookRemoveObjectForKey:(id)arg1;
- (void)safekit_hookSetObject:(id)arg1 forKey:(id)arg2;
@end

