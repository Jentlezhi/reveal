//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCard : NSObject
{
}

+ (id)imToVcardField:(id)arg1 label:(id)arg2;
+ (id)urlToVcardField:(id)arg1 label:(id)arg2;
+ (id)addressToVcardField:(id)arg1 label:(id)arg2;
+ (id)phoneToVcardField:(id)arg1 label:(id)arg2;
+ (id)emailToVcardField:(id)arg1 label:(id)arg2;
+ (id)toVcardUIDWithParameters:(id)arg1;
+ (id)toVcardField:(id)arg1 items:(id)arg2 labels:(id)arg3;
+ (id)generateVCardStringWithRec:(void *)arg1;
+ (id)generateVCardStringWithRecID:(long long)arg1;
+ (void)setItemCounter:(long long)arg1;
+ (long long)itemCounter;

@end

