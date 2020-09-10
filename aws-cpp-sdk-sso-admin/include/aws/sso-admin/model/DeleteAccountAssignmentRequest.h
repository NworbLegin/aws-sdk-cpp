﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/TargetType.h>
#include <aws/sso-admin/model/PrincipalType.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class AWS_SSOADMIN_API DeleteAccountAssignmentRequest : public SSOAdminRequest
  {
  public:
    DeleteAccountAssignmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccountAssignment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DeleteAccountAssignmentRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DeleteAccountAssignmentRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DeleteAccountAssignmentRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>The identifier for the chosen target.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The identifier for the chosen target.</p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>The identifier for the chosen target.</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The identifier for the chosen target.</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>The identifier for the chosen target.</p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>The identifier for the chosen target.</p>
     */
    inline DeleteAccountAssignmentRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The identifier for the chosen target.</p>
     */
    inline DeleteAccountAssignmentRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the chosen target.</p>
     */
    inline DeleteAccountAssignmentRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p>The entity type for which the assignment will be deleted.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The entity type for which the assignment will be deleted.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The entity type for which the assignment will be deleted.</p>
     */
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The entity type for which the assignment will be deleted.</p>
     */
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The entity type for which the assignment will be deleted.</p>
     */
    inline DeleteAccountAssignmentRequest& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The entity type for which the assignment will be deleted.</p>
     */
    inline DeleteAccountAssignmentRequest& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the permission set that will be used to remove access.</p>
     */
    inline const Aws::String& GetPermissionSetArn() const{ return m_permissionSetArn; }

    /**
     * <p>The ARN of the permission set that will be used to remove access.</p>
     */
    inline bool PermissionSetArnHasBeenSet() const { return m_permissionSetArnHasBeenSet; }

    /**
     * <p>The ARN of the permission set that will be used to remove access.</p>
     */
    inline void SetPermissionSetArn(const Aws::String& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = value; }

    /**
     * <p>The ARN of the permission set that will be used to remove access.</p>
     */
    inline void SetPermissionSetArn(Aws::String&& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = std::move(value); }

    /**
     * <p>The ARN of the permission set that will be used to remove access.</p>
     */
    inline void SetPermissionSetArn(const char* value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn.assign(value); }

    /**
     * <p>The ARN of the permission set that will be used to remove access.</p>
     */
    inline DeleteAccountAssignmentRequest& WithPermissionSetArn(const Aws::String& value) { SetPermissionSetArn(value); return *this;}

    /**
     * <p>The ARN of the permission set that will be used to remove access.</p>
     */
    inline DeleteAccountAssignmentRequest& WithPermissionSetArn(Aws::String&& value) { SetPermissionSetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the permission set that will be used to remove access.</p>
     */
    inline DeleteAccountAssignmentRequest& WithPermissionSetArn(const char* value) { SetPermissionSetArn(value); return *this;}


    /**
     * <p>The entity type for which the assignment will be deleted.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }

    /**
     * <p>The entity type for which the assignment will be deleted.</p>
     */
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }

    /**
     * <p>The entity type for which the assignment will be deleted.</p>
     */
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }

    /**
     * <p>The entity type for which the assignment will be deleted.</p>
     */
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }

    /**
     * <p>The entity type for which the assignment will be deleted.</p>
     */
    inline DeleteAccountAssignmentRequest& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}

    /**
     * <p>The entity type for which the assignment will be deleted.</p>
     */
    inline DeleteAccountAssignmentRequest& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}


    /**
     * <p>The identifier of the principal.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The identifier of the principal.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The identifier of the principal.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The identifier of the principal.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The identifier of the principal.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The identifier of the principal.</p>
     */
    inline DeleteAccountAssignmentRequest& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The identifier of the principal.</p>
     */
    inline DeleteAccountAssignmentRequest& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the principal.</p>
     */
    inline DeleteAccountAssignmentRequest& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}

  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;

    TargetType m_targetType;
    bool m_targetTypeHasBeenSet;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet;

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
