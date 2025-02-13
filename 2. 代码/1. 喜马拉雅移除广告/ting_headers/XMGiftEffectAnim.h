//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString, XMLiveGiftItem, XMLiveRoomGiftMsgSp;

@interface XMGiftEffectAnim : XMModel
{
    unsigned long long _animType;
    long long _templateId;
    long long _type;
    NSString *_replaceUrl;
    long long _senderId;
    NSString *_senderNickName;
    NSString *_animatedContent;
    long long _giftId;
    long long _quantity;
    XMLiveGiftItem *_gift;
    XMLiveRoomGiftMsgSp *_giftSp;
}

+ (id)xmm_modelCustomPropertyMapper;
+ (id)specialEffectAnimFrom:(id)arg1;
+ (id)mp4AnimFromRoomMsg:(id)arg1;
+ (id)templateAnimFromDict:(id)arg1;
+ (id)templateGiftAnimFromDict:(id)arg1;
+ (id)giftAnimFrom:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveRoomGiftMsgSp *giftSp; // @synthesize giftSp=_giftSp;
@property(retain, nonatomic) XMLiveGiftItem *gift; // @synthesize gift=_gift;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) long long giftId; // @synthesize giftId=_giftId;
@property(copy, nonatomic) NSString *animatedContent; // @synthesize animatedContent=_animatedContent;
@property(copy, nonatomic) NSString *senderNickName; // @synthesize senderNickName=_senderNickName;
@property(nonatomic) long long senderId; // @synthesize senderId=_senderId;
@property(retain, nonatomic) NSString *replaceUrl; // @synthesize replaceUrl=_replaceUrl;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long templateId; // @synthesize templateId=_templateId;
@property(nonatomic) unsigned long long animType; // @synthesize animType=_animType;
- (id)init;
- (void)dealloc;

@end

