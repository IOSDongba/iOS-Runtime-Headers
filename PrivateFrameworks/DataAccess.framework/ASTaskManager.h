/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, ASTask, ASAccount, ASPolicyManager, ASGetOptionsTask, NSError;

@interface ASTaskManager : DATaskManager <ASPolicyManagerDelegate> {
    ASAccount *_account;
    ASGetOptionsTask *_getOptionsTask;
    ASTask *_modalGetOptionsTask;
    ASTask *_modalPolicyKeyUpdateTask;
    ASPolicyManager *_policyManager;
    NSMutableDictionary *_taskIDToTask;
    NSError *_versionError;
}

- (id)_deviceType;
- (void)_finishAllTasksWithError:(id)arg1;
- (id)_model;
- (void)_populateVersionDescriptions;
- (BOOL)_useFakeDescriptions;
- (id)_userAgent;
- (id)_version;
- (id)account;
- (id)accountID;
- (id)accountPersistentUUID;
- (void)cancelAllTasks;
- (void)cancelTask:(id)arg1;
- (void)cancelTaskWithID:(NSInteger)arg1;
- (void)dealloc;
- (id)deviceID;
- (id)deviceType;
- (void)dropPowerAssertions;
- (id)easProtocolVersion;
- (void)finishTask:(id)arg1 withError:(id)arg2;
- (void)getOptionsTask:(id)arg1 completedWithStatus:(NSInteger)arg2 supportedCommands:(id)arg3 supportedVersions:(id)arg4 error:(id)arg5;
- (id)identityPersist;
- (id)initWithAccount:(id)arg1 policyManager:(id)arg2;
- (id)password;
- (id)policyKey;
- (id)policyManager;
- (void)policyManagerFailedToUpdatePolicy:(id)arg1;
- (void)policyManagerUpdatedPolicy:(id)arg1;
- (NSInteger)port;
- (id)protocol;
- (void)reattainPowerAssertions;
- (void)requestEASVersionWithDelegateTask:(id)arg1;
- (id)server;
- (void)setAccount:(id)arg1;
- (void)setEASProtocolVersion:(id)arg1;
- (void)shutdown;
- (id)stateString;
- (void)taskDidFinish:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (void)updatePolicyKeyWithDelegateTask:(id)arg1;
- (BOOL)useSSL;
- (id)user;
- (id)userAgent;

@end