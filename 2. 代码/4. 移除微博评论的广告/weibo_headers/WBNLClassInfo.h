//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WBNLClassInfo : NSObject
{
    _Bool _needUpdate;
    _Bool _isMeta;
    Class _cls;
    Class _superCls;
    Class _metaCls;
    NSString *_name;
    WBNLClassInfo *_superClassInfo;
    NSDictionary *_ivarInfos;
    NSDictionary *_methodInfos;
    NSDictionary *_propertyInfos;
}

+ (id)classInfoWithClassName:(id)arg1;
+ (id)classInfoWithClass:(Class)arg1;
@property(readonly, nonatomic) NSDictionary *propertyInfos; // @synthesize propertyInfos=_propertyInfos;
@property(readonly, nonatomic) NSDictionary *methodInfos; // @synthesize methodInfos=_methodInfos;
@property(readonly, nonatomic) NSDictionary *ivarInfos; // @synthesize ivarInfos=_ivarInfos;
@property(readonly, nonatomic) WBNLClassInfo *superClassInfo; // @synthesize superClassInfo=_superClassInfo;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool isMeta; // @synthesize isMeta=_isMeta;
@property(readonly, nonatomic) Class metaCls; // @synthesize metaCls=_metaCls;
@property(readonly, nonatomic) Class superCls; // @synthesize superCls=_superCls;
@property(readonly, nonatomic) Class cls; // @synthesize cls=_cls;
- (void).cxx_destruct;
- (_Bool)needUpdate;
- (void)setNeedUpdate;
- (void)_update;
- (id)initWithClass:(Class)arg1;

@end

