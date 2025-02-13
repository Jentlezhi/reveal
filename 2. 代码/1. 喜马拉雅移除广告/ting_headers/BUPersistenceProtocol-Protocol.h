//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol NSCoding;

@protocol BUPersistenceProtocol <NSObject>
- (_Bool)save;
- (_Bool)removeObjectsForKeys:(NSArray *)arg1;
- (_Bool)removeAll;
- (_Bool)hasObjectForKey:(NSString *)arg1;
- (_Bool)setObject:(id <NSCoding>)arg1 forKey:(NSString *)arg2;
- (void)updateObjectsForKeys:(NSArray *)arg1 WithBlock:(NSDictionary * (^)(NSArray *))arg2;
- (NSArray *)objectsForKeys:(NSArray *)arg1;
- (id)objectForKey:(NSString *)arg1;
- (NSArray *)allObjects;
@end

