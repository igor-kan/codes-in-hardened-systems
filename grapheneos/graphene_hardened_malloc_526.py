"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 526."""

def spec_graphene_hardened_malloc_526() -> dict:
    return {"system": "GrapheneOS", "spec_id": 526, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_526():
    s = spec_graphene_hardened_malloc_526()
    assert s["spec_id"] == 526
