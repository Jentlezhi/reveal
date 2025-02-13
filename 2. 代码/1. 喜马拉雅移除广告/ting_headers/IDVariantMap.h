//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface IDVariantMap : NSObject
{
    NSMutableDictionary *_content;
}

+ (id)variantMapWithVariant:(id)arg1 forId:(long long)arg2;
+ (id)variantMapWithEtchObject:(shared_ptr_987f58d3)arg1;
+ (id)allSDSLanguageKeys;
+ (id)variantMapWithAppName:(id)arg1;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (id)variantForId:(long long)arg1;
- (void)setVariant:(id)arg1 forId:(long long)arg2;
- (_Bool)isEqualToVariantMap:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSArray *allKeys;
- (id)initWithVariant:(id)arg1 forId:(long long)arg2;
- (id)init;
- (shared_ptr_cdcbacd5)etchObject;
- (shared_ptr_987f58d3)etchHashTable;
- (id)initWithEtchObject:(shared_ptr_987f58d3)arg1;
- (id)extractIntentResultRecognizedSlots;
- (id)extractIntentIdentifier;
- (id)extractDialogToken;

@end

