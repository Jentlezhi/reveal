//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface WXThreadSafeMutableDictionary : NSMutableDictionary
{
    NSMutableDictionary *_dict;
    struct _opaque_pthread_mutex_t _safeThreadDictionaryMutex;
    struct _opaque_pthread_mutexattr_t _safeThreadDictionaryMutexAttr;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)copy;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)allValues;
- (id)allKeys;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)keyEnumerator;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (id)initCommon;

@end

