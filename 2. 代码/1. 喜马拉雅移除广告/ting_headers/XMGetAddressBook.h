//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMGetAddressBook : NSObject
{
}

+ (id)fetchUserId;
+ (id)polyphoneStringHandle:(id)arg1 pinyinString:(id)arg2;
+ (id)getFirstLetterFromString:(id)arg1;
+ (void)getOriginalNoRepeatAddressBook:(CDUnknownBlockType)arg1 authorizationFailure:(CDUnknownBlockType)arg2;
+ (void)getOrderAddressBook:(CDUnknownBlockType)arg1 authorizationFailure:(CDUnknownBlockType)arg2;
+ (void)getOriginalAddressBook:(CDUnknownBlockType)arg1 authorizationFailure:(CDUnknownBlockType)arg2;
+ (void)requestAddressBookAuthorization;

@end

