//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface XMVIPCardModel : NSObject
{
    NSString *_title;
    NSString *_subTitle;
    NSString *_cardDescription;
    NSURL *_coverUrl;
    NSString *_expiryDate;
    NSString *_userName;
    NSString *_ownerName;
    NSString *_cardNo;
    long long _memberCardId;
    long long _ownerId;
    long long _memberProductId;
}

@property(nonatomic) long long memberProductId; // @synthesize memberProductId=_memberProductId;
@property(nonatomic) long long ownerId; // @synthesize ownerId=_ownerId;
@property(nonatomic) long long memberCardId; // @synthesize memberCardId=_memberCardId;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(retain, nonatomic) NSURL *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *cardDescription; // @synthesize cardDescription=_cardDescription;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)convertFromVIPInfoData:(id)arg1;
- (void)updateCardModelWithDic:(id)arg1;
- (void)dealloc;

@end

