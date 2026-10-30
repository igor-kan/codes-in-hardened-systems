"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1426."""

def spec_graphene_hardened_malloc_1426() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1426, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1426():
    s = spec_graphene_hardened_malloc_1426()
    assert s["spec_id"] == 1426
